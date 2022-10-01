// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONRESPONSE_H
#define QTAWS_BATCHGETREPOSITORYSCANNINGCONFIGURATIONRESPONSE_H

#include "ecrresponse.h"
#include "batchgetrepositoryscanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class BatchGetRepositoryScanningConfigurationResponsePrivate;

class QTAWSECR_EXPORT BatchGetRepositoryScanningConfigurationResponse : public EcrResponse {
    Q_OBJECT

public:
    BatchGetRepositoryScanningConfigurationResponse(const BatchGetRepositoryScanningConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetRepositoryScanningConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetRepositoryScanningConfigurationResponse)
    Q_DISABLE_COPY(BatchGetRepositoryScanningConfigurationResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
