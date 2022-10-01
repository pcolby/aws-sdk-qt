// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststoragelensconfigurationsresponse.h"
#include "liststoragelensconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListStorageLensConfigurationsResponse
 * \brief The ListStorageLensConfigurationsResponse class provides an interace for S3Control ListStorageLensConfigurations responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listStorageLensConfigurations
 */

/*!
 * Constructs a ListStorageLensConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStorageLensConfigurationsResponse::ListStorageLensConfigurationsResponse(
        const ListStorageLensConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListStorageLensConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListStorageLensConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStorageLensConfigurationsRequest * ListStorageLensConfigurationsResponse::request() const
{
    Q_D(const ListStorageLensConfigurationsResponse);
    return static_cast<const ListStorageLensConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListStorageLensConfigurations \a response.
 */
void ListStorageLensConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStorageLensConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListStorageLensConfigurationsResponsePrivate
 * \brief The ListStorageLensConfigurationsResponsePrivate class provides private implementation for ListStorageLensConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListStorageLensConfigurationsResponsePrivate object with public implementation \a q.
 */
ListStorageLensConfigurationsResponsePrivate::ListStorageLensConfigurationsResponsePrivate(
    ListStorageLensConfigurationsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListStorageLensConfigurations response element from \a xml.
 */
void ListStorageLensConfigurationsResponsePrivate::parseListStorageLensConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStorageLensConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
