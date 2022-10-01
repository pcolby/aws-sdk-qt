// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTEXTTRANSLATIONJOBREQUEST_H
#define QTAWS_STOPTEXTTRANSLATIONJOBREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class StopTextTranslationJobRequestPrivate;

class QTAWSTRANSLATE_EXPORT StopTextTranslationJobRequest : public TranslateRequest {

public:
    StopTextTranslationJobRequest(const StopTextTranslationJobRequest &other);
    StopTextTranslationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTextTranslationJobRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
