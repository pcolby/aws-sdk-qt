// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOSTREAMREQUEST_H
#define QTAWS_ADDTAGSTOSTREAMREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class AddTagsToStreamRequestPrivate;

class QTAWSKINESIS_EXPORT AddTagsToStreamRequest : public KinesisRequest {

public:
    AddTagsToStreamRequest(const AddTagsToStreamRequest &other);
    AddTagsToStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
