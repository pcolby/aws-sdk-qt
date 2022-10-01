// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepoliciesresponse.h"
#include "getresourcepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetResourcePoliciesResponse
 * \brief The GetResourcePoliciesResponse class provides an interace for Glue GetResourcePolicies responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getResourcePolicies
 */

/*!
 * Constructs a GetResourcePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcePoliciesResponse::GetResourcePoliciesResponse(
        const GetResourcePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetResourcePoliciesResponsePrivate(this), parent)
{
    setRequest(new GetResourcePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcePoliciesRequest * GetResourcePoliciesResponse::request() const
{
    Q_D(const GetResourcePoliciesResponse);
    return static_cast<const GetResourcePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetResourcePolicies \a response.
 */
void GetResourcePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetResourcePoliciesResponsePrivate
 * \brief The GetResourcePoliciesResponsePrivate class provides private implementation for GetResourcePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetResourcePoliciesResponsePrivate object with public implementation \a q.
 */
GetResourcePoliciesResponsePrivate::GetResourcePoliciesResponsePrivate(
    GetResourcePoliciesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetResourcePolicies response element from \a xml.
 */
void GetResourcePoliciesResponsePrivate::parseGetResourcePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
