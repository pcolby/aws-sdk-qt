// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTLABELSTASKRUNREQUEST_H
#define QTAWS_STARTEXPORTLABELSTASKRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartExportLabelsTaskRunRequestPrivate;

class QTAWSGLUE_EXPORT StartExportLabelsTaskRunRequest : public GlueRequest {

public:
    StartExportLabelsTaskRunRequest(const StartExportLabelsTaskRunRequest &other);
    StartExportLabelsTaskRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExportLabelsTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
