// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONREQUEST_H
#define QTAWS_GETCONFIGURATIONREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class GetConfigurationRequestPrivate;

class QTAWSINSPECTOR2_EXPORT GetConfigurationRequest : public Inspector2Request {

public:
    GetConfigurationRequest(const GetConfigurationRequest &other);
    GetConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
