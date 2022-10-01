// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettargetresourcetyperesponse.h"
#include "gettargetresourcetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetTargetResourceTypeResponse
 * \brief The GetTargetResourceTypeResponse class provides an interace for Fis GetTargetResourceType responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getTargetResourceType
 */

/*!
 * Constructs a GetTargetResourceTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetTargetResourceTypeResponse::GetTargetResourceTypeResponse(
        const GetTargetResourceTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetTargetResourceTypeResponsePrivate(this), parent)
{
    setRequest(new GetTargetResourceTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTargetResourceTypeRequest * GetTargetResourceTypeResponse::request() const
{
    Q_D(const GetTargetResourceTypeResponse);
    return static_cast<const GetTargetResourceTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis GetTargetResourceType \a response.
 */
void GetTargetResourceTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTargetResourceTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetTargetResourceTypeResponsePrivate
 * \brief The GetTargetResourceTypeResponsePrivate class provides private implementation for GetTargetResourceTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetTargetResourceTypeResponsePrivate object with public implementation \a q.
 */
GetTargetResourceTypeResponsePrivate::GetTargetResourceTypeResponsePrivate(
    GetTargetResourceTypeResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetTargetResourceType response element from \a xml.
 */
void GetTargetResourceTypeResponsePrivate::parseGetTargetResourceTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTargetResourceTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
