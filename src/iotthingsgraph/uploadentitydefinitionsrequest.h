// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADENTITYDEFINITIONSREQUEST_H
#define QTAWS_UPLOADENTITYDEFINITIONSREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UploadEntityDefinitionsRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UploadEntityDefinitionsRequest : public IoTThingsGraphRequest {

public:
    UploadEntityDefinitionsRequest(const UploadEntityDefinitionsRequest &other);
    UploadEntityDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadEntityDefinitionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
