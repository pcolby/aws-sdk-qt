// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCESSANALYZERRESPONSE_H
#define QTAWS_ACCESSANALYZERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsaccessanalyzerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AccessAnalyzer {

class AccessAnalyzerResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT AccessAnalyzerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AccessAnalyzerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AccessAnalyzerResponse(AccessAnalyzerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AccessAnalyzerResponse)
    Q_DISABLE_COPY(AccessAnalyzerResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
