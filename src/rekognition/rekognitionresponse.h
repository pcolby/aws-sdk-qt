// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REKOGNITIONRESPONSE_H
#define QTAWS_REKOGNITIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsrekognitionglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Rekognition {

class RekognitionResponsePrivate;

class QTAWSREKOGNITION_EXPORT RekognitionResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RekognitionResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RekognitionResponse(RekognitionResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RekognitionResponse)
    Q_DISABLE_COPY(RekognitionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
