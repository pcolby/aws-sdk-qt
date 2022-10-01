// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDMEDICALRESPONSE_H
#define QTAWS_COMPREHENDMEDICALRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscomprehendmedicalglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ComprehendMedicalResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ComprehendMedicalResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ComprehendMedicalResponse(ComprehendMedicalResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComprehendMedicalResponse)
    Q_DISABLE_COPY(ComprehendMedicalResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
