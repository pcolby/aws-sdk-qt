// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateembedurlforregistereduserresponse.h"
#include "generateembedurlforregistereduserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForRegisteredUserResponse
 * \brief The GenerateEmbedUrlForRegisteredUserResponse class provides an interace for QuickSight GenerateEmbedUrlForRegisteredUser responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::generateEmbedUrlForRegisteredUser
 */

/*!
 * Constructs a GenerateEmbedUrlForRegisteredUserResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateEmbedUrlForRegisteredUserResponse::GenerateEmbedUrlForRegisteredUserResponse(
        const GenerateEmbedUrlForRegisteredUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new GenerateEmbedUrlForRegisteredUserResponsePrivate(this), parent)
{
    setRequest(new GenerateEmbedUrlForRegisteredUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateEmbedUrlForRegisteredUserRequest * GenerateEmbedUrlForRegisteredUserResponse::request() const
{
    Q_D(const GenerateEmbedUrlForRegisteredUserResponse);
    return static_cast<const GenerateEmbedUrlForRegisteredUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight GenerateEmbedUrlForRegisteredUser \a response.
 */
void GenerateEmbedUrlForRegisteredUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateEmbedUrlForRegisteredUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForRegisteredUserResponsePrivate
 * \brief The GenerateEmbedUrlForRegisteredUserResponsePrivate class provides private implementation for GenerateEmbedUrlForRegisteredUserResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GenerateEmbedUrlForRegisteredUserResponsePrivate object with public implementation \a q.
 */
GenerateEmbedUrlForRegisteredUserResponsePrivate::GenerateEmbedUrlForRegisteredUserResponsePrivate(
    GenerateEmbedUrlForRegisteredUserResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight GenerateEmbedUrlForRegisteredUser response element from \a xml.
 */
void GenerateEmbedUrlForRegisteredUserResponsePrivate::parseGenerateEmbedUrlForRegisteredUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateEmbedUrlForRegisteredUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
