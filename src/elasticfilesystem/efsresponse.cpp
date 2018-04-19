/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "efsresponse.h"
#include "efsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::EFSResponse
 * \brief The EFSResponse class provides an interface for EFS responses.
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a EFSResponse object with parent \a parent.
 */
EFSResponse::EFSResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EFSResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EFSResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EFSResponsePrivate.
 */
EFSResponse::EFSResponse(EFSResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EFSResponse::parseFailure(QIODevice &response)
{
    Q_D(EFSResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::EFS::EFSResponsePrivate
 * \brief The EFSResponsePrivate class provides private implementation for EFSResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a EFSResponsePrivate object with public implementation \a q.
 */
EFSResponsePrivate::EFSResponsePrivate(
    EFSResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EFS
} // namespace QtAws
