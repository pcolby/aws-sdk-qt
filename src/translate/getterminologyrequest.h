// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTERMINOLOGYREQUEST_H
#define QTAWS_GETTERMINOLOGYREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class GetTerminologyRequestPrivate;

class QTAWSTRANSLATE_EXPORT GetTerminologyRequest : public TranslateRequest {

public:
    GetTerminologyRequest(const GetTerminologyRequest &other);
    GetTerminologyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTerminologyRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
