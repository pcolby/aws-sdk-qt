// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREDATARESPONSE_H
#define QTAWS_MEDIASTOREDATARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmediastoredataglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaStoreData {

class MediaStoreDataResponsePrivate;

class QTAWSMEDIASTOREDATA_EXPORT MediaStoreDataResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaStoreDataResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaStoreDataResponse(MediaStoreDataResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaStoreDataResponse)
    Q_DISABLE_COPY(MediaStoreDataResponse)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
