// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETREQUEST_H
#define QTAWS_CREATECONFIGURATIONSETREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateConfigurationSetRequestPrivate;

class QTAWSSESV2_EXPORT CreateConfigurationSetRequest : public SESv2Request {

public:
    CreateConfigurationSetRequest(const CreateConfigurationSetRequest &other);
    CreateConfigurationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
