// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOCDBRESPONSE_H
#define QTAWS_DOCDBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdocdbglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DocDb {

class DocDbResponsePrivate;

class QTAWSDOCDB_EXPORT DocDbResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DocDbResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DocDbResponse(DocDbResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DocDbResponse)
    Q_DISABLE_COPY(DocDbResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
