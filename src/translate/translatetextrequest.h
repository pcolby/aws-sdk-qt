// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATETEXTREQUEST_H
#define QTAWS_TRANSLATETEXTREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class TranslateTextRequestPrivate;

class QTAWSTRANSLATE_EXPORT TranslateTextRequest : public TranslateRequest {

public:
    TranslateTextRequest(const TranslateTextRequest &other);
    TranslateTextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranslateTextRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
