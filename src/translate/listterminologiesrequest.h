// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTERMINOLOGIESREQUEST_H
#define QTAWS_LISTTERMINOLOGIESREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class ListTerminologiesRequestPrivate;

class QTAWSTRANSLATE_EXPORT ListTerminologiesRequest : public TranslateRequest {

public:
    ListTerminologiesRequest(const ListTerminologiesRequest &other);
    ListTerminologiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTerminologiesRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
