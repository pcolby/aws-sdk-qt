// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGEMODELSREQUEST_H
#define QTAWS_LISTLANGUAGEMODELSREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListLanguageModelsRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListLanguageModelsRequest : public TranscribeRequest {

public:
    ListLanguageModelsRequest(const ListLanguageModelsRequest &other);
    ListLanguageModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLanguageModelsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
