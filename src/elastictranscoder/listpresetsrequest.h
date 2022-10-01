// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSREQUEST_H
#define QTAWS_LISTPRESETSREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListPresetsRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT ListPresetsRequest : public ElasticTranscoderRequest {

public:
    ListPresetsRequest(const ListPresetsRequest &other);
    ListPresetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPresetsRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
