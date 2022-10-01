// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTORERESPONSE_H
#define QTAWS_MEDIASTORERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmediastoreglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaStore {

class MediaStoreResponsePrivate;

class QTAWSMEDIASTORE_EXPORT MediaStoreResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaStoreResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaStoreResponse(MediaStoreResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaStoreResponse)
    Q_DISABLE_COPY(MediaStoreResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
