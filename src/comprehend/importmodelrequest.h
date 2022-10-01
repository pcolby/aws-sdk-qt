// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMODELREQUEST_H
#define QTAWS_IMPORTMODELREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ImportModelRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ImportModelRequest : public ComprehendRequest {

public:
    ImportModelRequest(const ImportModelRequest &other);
    ImportModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportModelRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
