// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointresponse.h"
#include "deleteendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DeleteEndpointResponse
 * \brief The DeleteEndpointResponse class provides an interace for Comprehend DeleteEndpoint responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::deleteEndpoint
 */

/*!
 * Constructs a DeleteEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEndpointResponse::DeleteEndpointResponse(
        const DeleteEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DeleteEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEndpointRequest * DeleteEndpointResponse::request() const
{
    Q_D(const DeleteEndpointResponse);
    return static_cast<const DeleteEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DeleteEndpoint \a response.
 */
void DeleteEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DeleteEndpointResponsePrivate
 * \brief The DeleteEndpointResponsePrivate class provides private implementation for DeleteEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DeleteEndpointResponsePrivate object with public implementation \a q.
 */
DeleteEndpointResponsePrivate::DeleteEndpointResponsePrivate(
    DeleteEndpointResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DeleteEndpoint response element from \a xml.
 */
void DeleteEndpointResponsePrivate::parseDeleteEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
