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

#ifndef QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_P_H
#define QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_P_H

#include "kms_p.h"
#include "generatedatakeywithoutplaintextrequest.h"

namespace AWS {

namespace KMS {

class GenerateDataKeyWithoutPlaintextRequest;

class QTAWS_EXPORT GenerateDataKeyWithoutPlaintextRequestPrivate : public KMSPrivate {

public:
    GenerateDataKeyWithoutPlaintextRequestPrivate(const KMS::Action action,
                                   GenerateDataKeyWithoutPlaintextRequest * const q);
    GenerateDataKeyWithoutPlaintextRequestPrivate(const GenerateDataKeyWithoutPlaintextRequestPrivate &other,
                                   GenerateDataKeyWithoutPlaintextRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyWithoutPlaintextRequest)

};

} // namespace KMS
} // namespace AWS

#endif
