// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBREQUEST_H
#define QTAWS_GETIMPORTJOBREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetImportJobRequestPrivate;

class QTAWSSESV2_EXPORT GetImportJobRequest : public SESv2Request {

public:
    GetImportJobRequest(const GetImportJobRequest &other);
    GetImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportJobRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
