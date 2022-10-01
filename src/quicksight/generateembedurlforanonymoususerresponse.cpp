// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateembedurlforanonymoususerresponse.h"
#include "generateembedurlforanonymoususerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForAnonymousUserResponse
 * \brief The GenerateEmbedUrlForAnonymousUserResponse class provides an interace for QuickSight GenerateEmbedUrlForAnonymousUser responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::generateEmbedUrlForAnonymousUser
 */

/*!
 * Constructs a GenerateEmbedUrlForAnonymousUserResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateEmbedUrlForAnonymousUserResponse::GenerateEmbedUrlForAnonymousUserResponse(
        const GenerateEmbedUrlForAnonymousUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new GenerateEmbedUrlForAnonymousUserResponsePrivate(this), parent)
{
    setRequest(new GenerateEmbedUrlForAnonymousUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateEmbedUrlForAnonymousUserRequest * GenerateEmbedUrlForAnonymousUserResponse::request() const
{
    Q_D(const GenerateEmbedUrlForAnonymousUserResponse);
    return static_cast<const GenerateEmbedUrlForAnonymousUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight GenerateEmbedUrlForAnonymousUser \a response.
 */
void GenerateEmbedUrlForAnonymousUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateEmbedUrlForAnonymousUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForAnonymousUserResponsePrivate
 * \brief The GenerateEmbedUrlForAnonymousUserResponsePrivate class provides private implementation for GenerateEmbedUrlForAnonymousUserResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GenerateEmbedUrlForAnonymousUserResponsePrivate object with public implementation \a q.
 */
GenerateEmbedUrlForAnonymousUserResponsePrivate::GenerateEmbedUrlForAnonymousUserResponsePrivate(
    GenerateEmbedUrlForAnonymousUserResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight GenerateEmbedUrlForAnonymousUser response element from \a xml.
 */
void GenerateEmbedUrlForAnonymousUserResponsePrivate::parseGenerateEmbedUrlForAnonymousUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateEmbedUrlForAnonymousUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
