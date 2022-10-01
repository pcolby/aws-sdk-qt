// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBREQUEST_H
#define QTAWS_CREATEIMPORTJOBREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateImportJobRequestPrivate;

class QTAWSSESV2_EXPORT CreateImportJobRequest : public SESv2Request {

public:
    CreateImportJobRequest(const CreateImportJobRequest &other);
    CreateImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImportJobRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
