// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startaccessloggingresponse.h"
#include "startaccessloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::StartAccessLoggingResponse
 * \brief The StartAccessLoggingResponse class provides an interace for MediaStore StartAccessLogging responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::startAccessLogging
 */

/*!
 * Constructs a StartAccessLoggingResponse object for \a reply to \a request, with parent \a parent.
 */
StartAccessLoggingResponse::StartAccessLoggingResponse(
        const StartAccessLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new StartAccessLoggingResponsePrivate(this), parent)
{
    setRequest(new StartAccessLoggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartAccessLoggingRequest * StartAccessLoggingResponse::request() const
{
    Q_D(const StartAccessLoggingResponse);
    return static_cast<const StartAccessLoggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore StartAccessLogging \a response.
 */
void StartAccessLoggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartAccessLoggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::StartAccessLoggingResponsePrivate
 * \brief The StartAccessLoggingResponsePrivate class provides private implementation for StartAccessLoggingResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a StartAccessLoggingResponsePrivate object with public implementation \a q.
 */
StartAccessLoggingResponsePrivate::StartAccessLoggingResponsePrivate(
    StartAccessLoggingResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore StartAccessLogging response element from \a xml.
 */
void StartAccessLoggingResponsePrivate::parseStartAccessLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAccessLoggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
