// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONVERTRESPONSE_H
#define QTAWS_MEDIACONVERTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmediaconvertglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaConvert {

class MediaConvertResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT MediaConvertResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaConvertResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaConvertResponse(MediaConvertResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaConvertResponse)
    Q_DISABLE_COPY(MediaConvertResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
