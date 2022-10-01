// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getactionresponse.h"
#include "getactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetActionResponse
 * \brief The GetActionResponse class provides an interace for Fis GetAction responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getAction
 */

/*!
 * Constructs a GetActionResponse object for \a reply to \a request, with parent \a parent.
 */
GetActionResponse::GetActionResponse(
        const GetActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetActionResponsePrivate(this), parent)
{
    setRequest(new GetActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetActionRequest * GetActionResponse::request() const
{
    Q_D(const GetActionResponse);
    return static_cast<const GetActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis GetAction \a response.
 */
void GetActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetActionResponsePrivate
 * \brief The GetActionResponsePrivate class provides private implementation for GetActionResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetActionResponsePrivate object with public implementation \a q.
 */
GetActionResponsePrivate::GetActionResponsePrivate(
    GetActionResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetAction response element from \a xml.
 */
void GetActionResponsePrivate::parseGetActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
