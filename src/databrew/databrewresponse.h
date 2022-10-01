// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABREWRESPONSE_H
#define QTAWS_DATABREWRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdatabrewglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DataBrew {

class DataBrewResponsePrivate;

class QTAWSDATABREW_EXPORT DataBrewResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DataBrewResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DataBrewResponse(DataBrewResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataBrewResponse)
    Q_DISABLE_COPY(DataBrewResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
