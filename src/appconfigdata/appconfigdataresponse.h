// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGDATARESPONSE_H
#define QTAWS_APPCONFIGDATARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappconfigdataglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppConfigData {

class AppConfigDataResponsePrivate;

class QTAWSAPPCONFIGDATA_EXPORT AppConfigDataResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppConfigDataResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppConfigDataResponse(AppConfigDataResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppConfigDataResponse)
    Q_DISABLE_COPY(AppConfigDataResponse)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
