// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLECONFIGURATIONRESPONSE_H
#define QTAWS_PUTLIFECYCLECONFIGURATIONRESPONSE_H

#include "efsresponse.h"
#include "putlifecycleconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class PutLifecycleConfigurationResponsePrivate;

class QTAWSEFS_EXPORT PutLifecycleConfigurationResponse : public EfsResponse {
    Q_OBJECT

public:
    PutLifecycleConfigurationResponse(const PutLifecycleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLifecycleConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleConfigurationResponse)
    Q_DISABLE_COPY(PutLifecycleConfigurationResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
