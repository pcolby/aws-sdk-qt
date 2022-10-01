// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOSTREAMRESPONSE_H
#define QTAWS_ADDTAGSTOSTREAMRESPONSE_H

#include "kinesisresponse.h"
#include "addtagstostreamrequest.h"

namespace QtAws {
namespace Kinesis {

class AddTagsToStreamResponsePrivate;

class QTAWSKINESIS_EXPORT AddTagsToStreamResponse : public KinesisResponse {
    Q_OBJECT

public:
    AddTagsToStreamResponse(const AddTagsToStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsToStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToStreamResponse)
    Q_DISABLE_COPY(AddTagsToStreamResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
