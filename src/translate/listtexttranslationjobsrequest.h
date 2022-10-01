// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEXTTRANSLATIONJOBSREQUEST_H
#define QTAWS_LISTTEXTTRANSLATIONJOBSREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class ListTextTranslationJobsRequestPrivate;

class QTAWSTRANSLATE_EXPORT ListTextTranslationJobsRequest : public TranslateRequest {

public:
    ListTextTranslationJobsRequest(const ListTextTranslationJobsRequest &other);
    ListTextTranslationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTextTranslationJobsRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
