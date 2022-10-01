// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepolicyresponse.h"
#include "getresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetResourcePolicyResponse
 * \brief The GetResourcePolicyResponse class provides an interace for Glue GetResourcePolicy responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getResourcePolicy
 */

/*!
 * Constructs a GetResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcePolicyResponse::GetResourcePolicyResponse(
        const GetResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new GetResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcePolicyRequest * GetResourcePolicyResponse::request() const
{
    Q_D(const GetResourcePolicyResponse);
    return static_cast<const GetResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetResourcePolicy \a response.
 */
void GetResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetResourcePolicyResponsePrivate
 * \brief The GetResourcePolicyResponsePrivate class provides private implementation for GetResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetResourcePolicyResponsePrivate object with public implementation \a q.
 */
GetResourcePolicyResponsePrivate::GetResourcePolicyResponsePrivate(
    GetResourcePolicyResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetResourcePolicy response element from \a xml.
 */
void GetResourcePolicyResponsePrivate::parseGetResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
