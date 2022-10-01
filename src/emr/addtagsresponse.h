// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSRESPONSE_H
#define QTAWS_ADDTAGSRESPONSE_H

#include "emrresponse.h"
#include "addtagsrequest.h"

namespace QtAws {
namespace Emr {

class AddTagsResponsePrivate;

class QTAWSEMR_EXPORT AddTagsResponse : public EmrResponse {
    Q_OBJECT

public:
    AddTagsResponse(const AddTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsResponse)
    Q_DISABLE_COPY(AddTagsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
