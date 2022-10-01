// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "markasarchivedresponse.h"
#include "markasarchivedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::MarkAsArchivedResponse
 * \brief The MarkAsArchivedResponse class provides an interace for Mgn MarkAsArchived responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::markAsArchived
 */

/*!
 * Constructs a MarkAsArchivedResponse object for \a reply to \a request, with parent \a parent.
 */
MarkAsArchivedResponse::MarkAsArchivedResponse(
        const MarkAsArchivedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new MarkAsArchivedResponsePrivate(this), parent)
{
    setRequest(new MarkAsArchivedRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MarkAsArchivedRequest * MarkAsArchivedResponse::request() const
{
    Q_D(const MarkAsArchivedResponse);
    return static_cast<const MarkAsArchivedRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn MarkAsArchived \a response.
 */
void MarkAsArchivedResponse::parseSuccess(QIODevice &response)
{
    //Q_D(MarkAsArchivedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::MarkAsArchivedResponsePrivate
 * \brief The MarkAsArchivedResponsePrivate class provides private implementation for MarkAsArchivedResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a MarkAsArchivedResponsePrivate object with public implementation \a q.
 */
MarkAsArchivedResponsePrivate::MarkAsArchivedResponsePrivate(
    MarkAsArchivedResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn MarkAsArchived response element from \a xml.
 */
void MarkAsArchivedResponsePrivate::parseMarkAsArchivedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MarkAsArchivedResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
