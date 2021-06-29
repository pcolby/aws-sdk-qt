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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTSIGNATURE_H
#define AWSABSTRACTSIGNATURE_H

#include "qtawscoreglobal.h"
#include "awsabstractcredentials.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace Core {

class AwsAbstractSignaturePrivate;

class QTAWSCORE_EXPORT AwsAbstractSignature {

public:
    AwsAbstractSignature();

    virtual ~AwsAbstractSignature();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const = 0;

    virtual int version() const = 0;

protected:
    /// @cond internal
    AwsAbstractSignaturePrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractSignature(AwsAbstractSignaturePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AwsAbstractSignature)
    Q_DISABLE_COPY(AwsAbstractSignature)
    friend class TestAwsAbstractSignature;
};

} // namespace Core
} // namespace QtAws

#endif
