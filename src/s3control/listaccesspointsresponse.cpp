// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesspointsresponse.h"
#include "listaccesspointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListAccessPointsResponse
 * \brief The ListAccessPointsResponse class provides an interace for S3Control ListAccessPoints responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listAccessPoints
 */

/*!
 * Constructs a ListAccessPointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessPointsResponse::ListAccessPointsResponse(
        const ListAccessPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListAccessPointsResponsePrivate(this), parent)
{
    setRequest(new ListAccessPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessPointsRequest * ListAccessPointsResponse::request() const
{
    Q_D(const ListAccessPointsResponse);
    return static_cast<const ListAccessPointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListAccessPoints \a response.
 */
void ListAccessPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListAccessPointsResponsePrivate
 * \brief The ListAccessPointsResponsePrivate class provides private implementation for ListAccessPointsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListAccessPointsResponsePrivate object with public implementation \a q.
 */
ListAccessPointsResponsePrivate::ListAccessPointsResponsePrivate(
    ListAccessPointsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListAccessPoints response element from \a xml.
 */
void ListAccessPointsResponsePrivate::parseListAccessPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
