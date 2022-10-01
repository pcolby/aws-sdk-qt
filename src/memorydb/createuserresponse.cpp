// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserresponse.h"
#include "createuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateUserResponse
 * \brief The CreateUserResponse class provides an interace for MemoryDb CreateUser responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createUser
 */

/*!
 * Constructs a CreateUserResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserResponse::CreateUserResponse(
        const CreateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new CreateUserResponsePrivate(this), parent)
{
    setRequest(new CreateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserRequest * CreateUserResponse::request() const
{
    Q_D(const CreateUserResponse);
    return static_cast<const CreateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb CreateUser \a response.
 */
void CreateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::CreateUserResponsePrivate
 * \brief The CreateUserResponsePrivate class provides private implementation for CreateUserResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateUserResponsePrivate object with public implementation \a q.
 */
CreateUserResponsePrivate::CreateUserResponsePrivate(
    CreateUserResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb CreateUser response element from \a xml.
 */
void CreateUserResponsePrivate::parseCreateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
