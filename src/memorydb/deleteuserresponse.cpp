// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserresponse.h"
#include "deleteuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteUserResponse
 * \brief The DeleteUserResponse class provides an interace for MemoryDb DeleteUser responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteUser
 */

/*!
 * Constructs a DeleteUserResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserResponse::DeleteUserResponse(
        const DeleteUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DeleteUserResponsePrivate(this), parent)
{
    setRequest(new DeleteUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserRequest * DeleteUserResponse::request() const
{
    Q_D(const DeleteUserResponse);
    return static_cast<const DeleteUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DeleteUser \a response.
 */
void DeleteUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DeleteUserResponsePrivate
 * \brief The DeleteUserResponsePrivate class provides private implementation for DeleteUserResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteUserResponsePrivate object with public implementation \a q.
 */
DeleteUserResponsePrivate::DeleteUserResponsePrivate(
    DeleteUserResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DeleteUser response element from \a xml.
 */
void DeleteUserResponsePrivate::parseDeleteUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
