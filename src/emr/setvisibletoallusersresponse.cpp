// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setvisibletoallusersresponse.h"
#include "setvisibletoallusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::SetVisibleToAllUsersResponse
 * \brief The SetVisibleToAllUsersResponse class provides an interace for Emr SetVisibleToAllUsers responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::setVisibleToAllUsers
 */

/*!
 * Constructs a SetVisibleToAllUsersResponse object for \a reply to \a request, with parent \a parent.
 */
SetVisibleToAllUsersResponse::SetVisibleToAllUsersResponse(
        const SetVisibleToAllUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new SetVisibleToAllUsersResponsePrivate(this), parent)
{
    setRequest(new SetVisibleToAllUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetVisibleToAllUsersRequest * SetVisibleToAllUsersResponse::request() const
{
    Q_D(const SetVisibleToAllUsersResponse);
    return static_cast<const SetVisibleToAllUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr SetVisibleToAllUsers \a response.
 */
void SetVisibleToAllUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetVisibleToAllUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::SetVisibleToAllUsersResponsePrivate
 * \brief The SetVisibleToAllUsersResponsePrivate class provides private implementation for SetVisibleToAllUsersResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a SetVisibleToAllUsersResponsePrivate object with public implementation \a q.
 */
SetVisibleToAllUsersResponsePrivate::SetVisibleToAllUsersResponsePrivate(
    SetVisibleToAllUsersResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr SetVisibleToAllUsers response element from \a xml.
 */
void SetVisibleToAllUsersResponsePrivate::parseSetVisibleToAllUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetVisibleToAllUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
