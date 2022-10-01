// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORUPDATETAGSRESPONSE_H
#define QTAWS_CREATEORUPDATETAGSRESPONSE_H

#include "autoscalingresponse.h"
#include "createorupdatetagsrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateOrUpdateTagsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT CreateOrUpdateTagsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    CreateOrUpdateTagsResponse(const CreateOrUpdateTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOrUpdateTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrUpdateTagsResponse)
    Q_DISABLE_COPY(CreateOrUpdateTagsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
