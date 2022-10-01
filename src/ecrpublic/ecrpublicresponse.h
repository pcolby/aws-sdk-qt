// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRPUBLICRESPONSE_H
#define QTAWS_ECRPUBLICRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsecrpublicglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace EcrPublic {

class EcrPublicResponsePrivate;

class QTAWSECRPUBLIC_EXPORT EcrPublicResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EcrPublicResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EcrPublicResponse(EcrPublicResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcrPublicResponse)
    Q_DISABLE_COPY(EcrPublicResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
