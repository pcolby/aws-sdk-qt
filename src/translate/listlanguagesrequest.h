// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGESREQUEST_H
#define QTAWS_LISTLANGUAGESREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class ListLanguagesRequestPrivate;

class QTAWSTRANSLATE_EXPORT ListLanguagesRequest : public TranslateRequest {

public:
    ListLanguagesRequest(const ListLanguagesRequest &other);
    ListLanguagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLanguagesRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
