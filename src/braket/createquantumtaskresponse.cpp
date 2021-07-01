/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createquantumtaskresponse.h"
#include "createquantumtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::CreateQuantumTaskResponse
 * \brief The CreateQuantumTaskResponse class provides an interace for Braket CreateQuantumTask responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::createQuantumTask
 */

/*!
 * Constructs a CreateQuantumTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQuantumTaskResponse::CreateQuantumTaskResponse(
        const CreateQuantumTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new CreateQuantumTaskResponsePrivate(this), parent)
{
    setRequest(new CreateQuantumTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQuantumTaskRequest * CreateQuantumTaskResponse::request() const
{
    Q_D(const CreateQuantumTaskResponse);
    return static_cast<const CreateQuantumTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket CreateQuantumTask \a response.
 */
void CreateQuantumTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQuantumTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::CreateQuantumTaskResponsePrivate
 * \brief The CreateQuantumTaskResponsePrivate class provides private implementation for CreateQuantumTaskResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a CreateQuantumTaskResponsePrivate object with public implementation \a q.
 */
CreateQuantumTaskResponsePrivate::CreateQuantumTaskResponsePrivate(
    CreateQuantumTaskResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket CreateQuantumTask response element from \a xml.
 */
void CreateQuantumTaskResponsePrivate::parseCreateQuantumTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQuantumTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
