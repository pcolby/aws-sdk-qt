// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobresponse.h"
#include "canceljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CancelJobResponse
 * \brief The CancelJobResponse class provides an interace for MediaConvert CancelJob responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::cancelJob
 */

/*!
 * Constructs a CancelJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJobResponse::CancelJobResponse(
        const CancelJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CancelJobResponsePrivate(this), parent)
{
    setRequest(new CancelJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJobRequest * CancelJobResponse::request() const
{
    Q_D(const CancelJobResponse);
    return static_cast<const CancelJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert CancelJob \a response.
 */
void CancelJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::CancelJobResponsePrivate
 * \brief The CancelJobResponsePrivate class provides private implementation for CancelJobResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CancelJobResponsePrivate object with public implementation \a q.
 */
CancelJobResponsePrivate::CancelJobResponsePrivate(
    CancelJobResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert CancelJob response element from \a xml.
 */
void CancelJobResponsePrivate::parseCancelJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
