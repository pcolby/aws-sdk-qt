// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourcepolicyresponse.h"
#include "putresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutResourcePolicyResponse
 * \brief The PutResourcePolicyResponse class provides an interace for Glue PutResourcePolicy responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::putResourcePolicy
 */

/*!
 * Constructs a PutResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourcePolicyResponse::PutResourcePolicyResponse(
        const PutResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new PutResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new PutResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourcePolicyRequest * PutResourcePolicyResponse::request() const
{
    Q_D(const PutResourcePolicyResponse);
    return static_cast<const PutResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue PutResourcePolicy \a response.
 */
void PutResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::PutResourcePolicyResponsePrivate
 * \brief The PutResourcePolicyResponsePrivate class provides private implementation for PutResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutResourcePolicyResponsePrivate object with public implementation \a q.
 */
PutResourcePolicyResponsePrivate::PutResourcePolicyResponsePrivate(
    PutResourcePolicyResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue PutResourcePolicy response element from \a xml.
 */
void PutResourcePolicyResponsePrivate::parsePutResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
