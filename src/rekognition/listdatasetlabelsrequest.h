// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETLABELSREQUEST_H
#define QTAWS_LISTDATASETLABELSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetLabelsRequestPrivate;

class QTAWSREKOGNITION_EXPORT ListDatasetLabelsRequest : public RekognitionRequest {

public:
    ListDatasetLabelsRequest(const ListDatasetLabelsRequest &other);
    ListDatasetLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
