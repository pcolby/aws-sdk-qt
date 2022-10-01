// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTLABELSTASKRUNREQUEST_H
#define QTAWS_STARTIMPORTLABELSTASKRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartImportLabelsTaskRunRequestPrivate;

class QTAWSGLUE_EXPORT StartImportLabelsTaskRunRequest : public GlueRequest {

public:
    StartImportLabelsTaskRunRequest(const StartImportLabelsTaskRunRequest &other);
    StartImportLabelsTaskRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportLabelsTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
