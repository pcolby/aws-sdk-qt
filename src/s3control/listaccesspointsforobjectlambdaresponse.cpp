// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesspointsforobjectlambdaresponse.h"
#include "listaccesspointsforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListAccessPointsForObjectLambdaResponse
 * \brief The ListAccessPointsForObjectLambdaResponse class provides an interace for S3Control ListAccessPointsForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listAccessPointsForObjectLambda
 */

/*!
 * Constructs a ListAccessPointsForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessPointsForObjectLambdaResponse::ListAccessPointsForObjectLambdaResponse(
        const ListAccessPointsForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListAccessPointsForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new ListAccessPointsForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessPointsForObjectLambdaRequest * ListAccessPointsForObjectLambdaResponse::request() const
{
    Q_D(const ListAccessPointsForObjectLambdaResponse);
    return static_cast<const ListAccessPointsForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListAccessPointsForObjectLambda \a response.
 */
void ListAccessPointsForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessPointsForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListAccessPointsForObjectLambdaResponsePrivate
 * \brief The ListAccessPointsForObjectLambdaResponsePrivate class provides private implementation for ListAccessPointsForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListAccessPointsForObjectLambdaResponsePrivate object with public implementation \a q.
 */
ListAccessPointsForObjectLambdaResponsePrivate::ListAccessPointsForObjectLambdaResponsePrivate(
    ListAccessPointsForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListAccessPointsForObjectLambda response element from \a xml.
 */
void ListAccessPointsForObjectLambdaResponsePrivate::parseListAccessPointsForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessPointsForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
