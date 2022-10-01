// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprojectresponse.h"
#include "getprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetProjectResponse
 * \brief The GetProjectResponse class provides an interace for Evidently GetProject responses.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::getProject
 */

/*!
 * Constructs a GetProjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetProjectResponse::GetProjectResponse(
        const GetProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new GetProjectResponsePrivate(this), parent)
{
    setRequest(new GetProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProjectRequest * GetProjectResponse::request() const
{
    Q_D(const GetProjectResponse);
    return static_cast<const GetProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently GetProject \a response.
 */
void GetProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::GetProjectResponsePrivate
 * \brief The GetProjectResponsePrivate class provides private implementation for GetProjectResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetProjectResponsePrivate object with public implementation \a q.
 */
GetProjectResponsePrivate::GetProjectResponsePrivate(
    GetProjectResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently GetProject response element from \a xml.
 */
void GetProjectResponsePrivate::parseGetProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
