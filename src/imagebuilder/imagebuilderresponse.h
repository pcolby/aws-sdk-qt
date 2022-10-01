// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMAGEBUILDERRESPONSE_H
#define QTAWS_IMAGEBUILDERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsimagebuilderglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ImageBuilder {

class ImageBuilderResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ImageBuilderResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ImageBuilderResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ImageBuilderResponse(ImageBuilderResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImageBuilderResponse)
    Q_DISABLE_COPY(ImageBuilderResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
