// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealertresponse.h"
#include "deletealertresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAlertResponse
 * \brief The DeleteAlertResponse class provides an interace for LookoutMetrics DeleteAlert responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAlert
 */

/*!
 * Constructs a DeleteAlertResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlertResponse::DeleteAlertResponse(
        const DeleteAlertRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DeleteAlertResponsePrivate(this), parent)
{
    setRequest(new DeleteAlertRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlertRequest * DeleteAlertResponse::request() const
{
    Q_D(const DeleteAlertResponse);
    return static_cast<const DeleteAlertRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DeleteAlert \a response.
 */
void DeleteAlertResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlertResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAlertResponsePrivate
 * \brief The DeleteAlertResponsePrivate class provides private implementation for DeleteAlertResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAlertResponsePrivate object with public implementation \a q.
 */
DeleteAlertResponsePrivate::DeleteAlertResponsePrivate(
    DeleteAlertResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DeleteAlert response element from \a xml.
 */
void DeleteAlertResponsePrivate::parseDeleteAlertResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlertResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
